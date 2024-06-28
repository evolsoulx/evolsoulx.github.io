import random
import math

def estimate_pi(samples):
    points_inside_circle = 0

    for _ in range(samples):
        # Generate random point within the square [-1, 1] x [-1, 1]
        x, y = random.uniform(-1, 1), random.uniform(-1, 1)
        
        # Check if the point is inside the quarter circle (r=1)
        if x**2 + y**2 <= 1:
            points_inside_circle += 1

    # The ratio of points inside the circle to total points, multiplied by 4, approximates pi
    pi_estimate = 4 * points_inside_circle / samples
    return pi_estimate

# Number of samples - larger numbers approximate the concept of "infinitesimal" better
samples = 32  # 1 million samples for a fine approximation

pi_estimate = estimate_pi(samples)
print(f"Estimated Pi: {pi_estimate}")
