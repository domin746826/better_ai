## Better AI

**THIS IS NOT LLM!**

**THIS IS EXPERIMENT!** I don't know if it would even work this way.

My attempt on making AI based on creating and parsing "thoughts" represented by C++ classes by algorithms, instead of using Transformer model and letting training process do all the training

I think thinking using words/tokens is not efficient at all and key to real thinking by computers and them understanding something is to let some other programs translate natural language, sensors data etc into some artifical language, for example:

"Go clean my room"

should generate thought:
```yaml
type: action
subtype: work
goal:
- room
    - go
    - clean
```

and it would look into database room section and see that its type is "Location" and there will be listed available things to do with, for example:

```yaml
...
- room
    type: location
    ...

# another object
- location
    known_actions: # from often used to least used
     - analyze
     - go
     - avoid
     - find
...
```

which would start some hardcoded navigation, possibly still parsing sensors data or thoughts. Next, it will find "clean" in database

```yaml
...
- clean
    type: action
    need_context: true
    known_actions: # from often used to least used
     - vacuum
     - sweep
     - wash
...
```

