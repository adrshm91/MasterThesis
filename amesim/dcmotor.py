import sympy as sym
from sympy.abc import s, t, x, y, z
import numpy as np
from sympy.integrals import inverse_laplace_transform
import matplotlib.pyplot as plt


# Step input
U = 1/s

# Transfer function
K, J, b, R, L = sym.symbols('K J b R L')
G = K/(s*((J*s + b)*(L*s + R) + K**2))
G = G.subs([(K, 0.0274), (J, 3.2284E-6), (b, 3.5077E-6), (R, 4), (L, 2.75E-6)])

# Calculate response
Y = G * U

# Inverse Laplace Transform
u = inverse_laplace_transform(U, s, t)
y = inverse_laplace_transform(Y, s, t)

# generate data for plot
tm = np.linspace(0, 8, 100)
us = np.zeros(len(tm))
ys = np.zeros(len(tm))

# substitute numeric values for u and y
for i in range(len(tm)):
    us[i] += u.subs(t, tm[i])
    ys[i] += y.subs(t, tm[i])

# Plot the results
plt.figure()
plt.plot(tm, us, label='u(t)')
plt.plot(tm, ys, label='y(t)')
plt.legend()
plt.xlabel('Time')
plt.show()





