""" Node-based game """
import random

game = []


class DecisionNode(object):
  """ This node represents a decision the user can make """
  def __init__(self, name, description, menuA, menuB, aNode, bNode):
    object.__init__(self)

    self.name = name
    self.description = description
    self.menuA = menuA
    self.menuB = menuB
    self.aNode = aNode
    self.bNode = bNode

  def process(self):
    """ prints out a menu, gets choice, returns next node address"""
    """ processing the node always returns the address of the next node """
    #default position is to stay at this Node
    nextNode = None
    print("""
    {}: {}
    A) {}
    B) {}""".format(self.name,
                    self.description,
                    self.menuA,
                    self.menuB))

    result = input("What will you do? ")
    if result.upper() == "A":
      nextNode = self.aNode
    elif result.upper() == "B":
      nextNode = self.bNode
    else:
      print("I didn't understand you. Restarting the game")
      nextNode = 0
    return nextNode

class SimpleFightNode(object):
  """ ridiculously simple combat class. Can be extended to be more elaborate 
      Right now it just rolls a random number to see if player wins or loses
      but you can incorporate a full combat system if you wish.  Most importantly
      you need to return which node to go to if player wins or loses the combat """

  def __init__(self, description, odds, winNode, loseNode):
    self.description = description
    self.odds = odds # chance of beating monster - 30 means 30% chance of winning
    self.winNode = winNode
    self.loseNode = loseNode

  def process(self):
    nextNode = None
    print(self.description)
    # just roll a 100-sided dice and compare to odds
    # make it much more fancy if you want, but don't forget to set nextNode
    dieRoll = random.randint(1,100)
    print ("You rolled a {}".format(dieRoll))
    if dieRoll < self.odds:
      nextNode = self.winNode
    else:
      nextNode = self.loseNode
    return nextNode

class FightNode(object):
  def __init__(self, description, player, enemy, winNode, loseNode):
    self.description = description
    self.player = player
    self.enemy = enemy
    self.winNode = winNode
    self.loseNode = loseNode

  def process(self):
    print(self.description)
    #Fight until one player or the other wins
    keepGoing = True
    #local variables are easier to work with
    player = self.player
    enemy = self.enemy
    while (keepGoing):
      # battle is simultaneous.  It's possible both die on same turn
      # end the loop when either player dies
      player.fight(enemy)
      if enemy.hp <= 0:
        print("{} wins".format(player.name))
        result = self.winNode
        keepGoing = False
      enemy.fight(player)
      if player.hp <= 0:
        print ("{} wins".format(enemy.name))
        keepGoing = False
        result = self.loseNode

      #print out hit points of both characters  
      print("{} HP: {}. {} HP: {}".format(player.name, player.hp,
                                           enemy.name, enemy.hp))
      input("enter to continue...")
    return result

class Character(object):
  def __init__(self, name, hitPerc, dNum, dSize, defMod, armor, hp):
    self.name = name
    self.hitPerc = hitPerc
    self.dNum = dNum
    self.dSize = dSize
    self.defMod = defMod
    self.armor = armor
    self.hp = hp
  
  def fight(self, enemy):
    # one round of a fight
    # enemy is another instance of Character
    hitPerc = (self.hitPerc - enemy.defMod)
    if random.randint(1, 100) < hitPerc:
      #hit
      damage = 0
      for i in range(self.dNum):
        damage += random.randint(1, self.dSize)

      damage -= enemy.armor
      enemy.hp -= damage
      print ("{} hits {} for {} damage.".format(
        self.name, enemy.name, damage))
    else:
      print("{} misses {}".format(self.name, enemy.name))

def makeSampleGame():
  """ the game itself is just a list of nodes.  Essentially it's a tree.
      Here I preloaded some nodes, but you can make as many as you want in any order.
      Of course you can also build an editor, or use pickling to save and load the nodes.
      The game can be changed by swapping out the nodes, but none of the logic changes.
  """
  #0
  game.append(DecisionNode("start", "You see a monster", "Fight", "explore", 1, 5)) 
  #1
  game.append(SimpleFightNode("Fight the monster", 75, 2, 4))
  #2
  game.append(FightNode( "You won, but here's an ogre", player, ogre, 3, 4))
  #3
  game.append(DecisionNode("Win", "You beat the ogre.", "start over", "quit", 0, 6))
  #4
  game.append(DecisionNode("Die", "The monster beat you. You Lose", "start  over", "quit", 0, 6))
  #5
  game.append(DecisionNode("Die", "The monster chased you and killed you.", "start over", "quit", 0, 6))                       
  #6
  
  # last node will be quit node. User will never see it, but you still need it to simplify logic
  game.append(DecisionNode("Game over", "", "", "", 0, 0))

def playGame():
  # loop until we get to whatever has been designated as the quit node
  QUIT_NODE = 6
  nodePointer = 0
  
  while nodePointer != QUIT_NODE: 
    currentNode = game[nodePointer]
    nodePointer = currentNode.process() 
    currentNode = game[nodePointer]


player = Character("player", 50, 2, 6, 10, 1, 20)
ogre = Character(  "ogre",   50, 1, 6, 5,  1, 50)

def main():
  #create the game and play it
  makeSampleGame()
  #testCombat()
  playGame()

# Python's standard idiom for running the main method appropriately
if __name__ == "__main__":
  main()