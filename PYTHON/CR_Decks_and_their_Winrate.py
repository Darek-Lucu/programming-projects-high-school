import matplotlib.pyplot as plt
import numpy as np

# Data (Clash royal Decks)
#x - nr. of total matches (as of 4 Jan 2026)
#y - Win % rate (just the wins)
#labels - the deck names

x = np.array([137825, 91110, 54782, 119070, 64270, 66052, 52180, 43731])
y = np.array([59.1, 56.2, 53.9, 53.3, 61.1, 50.8, 59.4, 57.1])
labels = [
    "EvoRG FishBoy Hunter 3.0",
    "X-Bow HeroKnight 3.0",
    "Hog EvoMusk 2.6",
    "EvoRHogs AQ EvoCannon 2.9",
    "EvoMusk Loon 2.9",
    "Log Bait",
    "RHogs EvoRR FM Zappies",
    "Hog MM EvoCannon 2.6 Cycle "
]

colors = np.array([59, 56, 54, 53, 61, 50, 59, 57])

#for the names of each individual dot with their corresponding deck name
fig, ax = plt.subplots(figsize=(6, 5))

#fig - the entire image
#ax - the actual plotting area (dots, lines, labels, etc)


# Scatter
ax.scatter(x, y, c=colors, s=3*y)

#----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
# Annotate each point
for xi, yi, name in zip(x, y, labels):
    ax.annotate(
        f"{name}\n{yi}%",
        (xi, yi),
        textcoords="offset points",
        xytext=(5, 5),
        fontsize=8,
    )
#----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------



#----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#Avarage Winrate
avg_winrate = y.mean()
ax.axhline(avg_winrate, color="red", linestyle="--", label="Average win rate")
ax.annotate(
    "Average win rate",
    xy=(min(x), avg_winrate),          
    xytext=(10,0),                     
    textcoords="offset points",
    fontsize=8,
    color="red"
)
#----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------



#Chart name, xAxis and yAxis with their names + a Grid-----------------------------------------------------------------------------------------------------------------------------
ax.set_title("CR Deck and their Win % Rate (Last 7 Days, 10k–12k trophies) as of 4th of January 2026")
ax.set_xlabel("Number of matches")
ax.set_ylabel("Win % rate")
ax.grid(True)
#----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------


#makes it so that the text fits in
fig.tight_layout()

plt.show()