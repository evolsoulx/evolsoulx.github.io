const firebaseConfig = {
    apiKey: "AIzaSyBdSPG5298ut99azpH9k1MXqsBU82GOg9U",
  authDomain: "critterverse.firebaseapp.com",
  projectId: "critterverse",
  storageBucket: "critterverse.appspot.com",
  messagingSenderId: "782384313016",
  appId: "1:782384313016:web:031e37fadbb6b2494dba4d",
  measurementId: "G-QV7N48M35P"
};

        // Initialize Firebase
        firebase.initializeApp(firebaseConfig);

        // Now you can use the Firebase SDK to interact with Firebase services, including Realtime Database.
        const database = firebase.database();
