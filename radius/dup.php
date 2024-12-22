<?php
    header('Access-Control-Allow-Origin: *');

    // Webservices credentials
    $userName = "1078000001742003"; // Your Webservices Username
    $passKey = "YwkD0z2oYu27K33xbvknyHfTyy0gJzli"; // Your Webservices Passkey
    $host = "https://useast.radiusbycampusmgmt.com/crm/webservice/"; // Your origin URL

    // Input parameters
    $module = $_GET['module'] ?? 'Registrations';
    $searchFields = urldecode($_GET['searchFields'] ?? 'status:Active');
    $returnFields = urldecode($_GET['returnFields'] ?? 'id|status|contactId');
    $page = $_GET['page'] ?? 1;
    $pageSize = $_GET['pageSize'] ?? 50;
    $queryId = $_GET['queryId'] ?? '';

    // Prepare search fields
    $search = explode("|", $searchFields);
    $dataSearch = array();
    foreach ($search as $field) {
        $fieldParts = explode(":", $field);
        if (count($fieldParts) == 2) {
            $dataSearch[$fieldParts[0]] = $fieldParts[1];
        }
    }
    $dataSearch = json_encode($dataSearch);

    // Prepare return fields
    $return = explode("|", $returnFields);
    $dataReturn = json_encode($return);

    // Create request data
    $data = '{"searchFields": ' . $dataSearch . ',"returnFields":' . $dataReturn . '}';

    // Set up API call URL
    $call = $host . "modules/" . $module . "/search/";

    // Initialize cURL session
    $curl = curl_init($call);
    curl_setopt($curl, CURLOPT_HTTPHEADER, array('Content-Type: application/json', 'Connection: Keep-Alive'));
    curl_setopt($curl, CURLOPT_HTTPAUTH, CURLAUTH_DIGEST);
    curl_setopt($curl, CURLOPT_USERPWD, $userName . ":" . $passKey);
    curl_setopt($curl, CURLOPT_RETURNTRANSFER, true);
    curl_setopt($curl, CURLOPT_POST, true);
    curl_setopt($curl, CURLOPT_POSTFIELDS, $data);

    // Bypass SSL verification (to fix SSL certificate issue)
    curl_setopt($curl, CURLOPT_SSL_VERIFYHOST, false);
    curl_setopt($curl, CURLOPT_SSL_VERIFYPEER, false);

    // Execute the cURL request
    $curl_response = curl_exec($curl);

    // Check for errors
    if (curl_errno($curl)) {
        echo 'Error:' . curl_error($curl);
    } else {
        // Print the response
        echo $curl_response;
    }

    // Close the cURL session
    curl_close($curl);
?>