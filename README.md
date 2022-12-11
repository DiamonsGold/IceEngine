# Ice Engine

Ice Engine is a 2D game engine written in C, using CSFML 2.2.

## Architecture


- Initialization
- Loop
    - Events
    - Update
    - Display
- Destroy

## Structure


- <span style="color:#FAD000">Scene_t</span>
    - <span style="color:#FF7200">int</span>: Id
    - <span style="color:#FAD000">Game_t</span>
    - <span style="color:#FAD000">List_t</span>: Events
    - <span style="color:#FAD000">List_t</span>: Update
    - <span style="color:#FAD000">List_t</span>: Display

- <span style="color:#FAD000">Object_t</span>
    - <span style="color:#FAD000">Sprite_t</span>
    - <span style="color:#FF7200">void *</span>: Component
    - <span style="color:#FAD000">Event_t</span>
    - Update
    - Destroy

- <span style="color:#FAD000">Text_t</span>
    - <span style="color:#FF7200">char *</span>: String
    - <span style="color:#3AD900">sfText</span>: Text
    - <span style="color:#3AD900">sfFont</span>: Font
    - <span style="color:#3AD900">sfColor</span>: Color
    - <span style="color:#FF7200">int</span>: Size
    - <span style="color:#3AD900">sfVector2f</span>: Coord
    - Update
    - Display
    - Destroy

- <span style="color:#FAD000">Sprite_t</span>
    - <span style="color:#3AD900">sfTexture</span>: Texture
    - <span style="color:#3AD900">sfSprite</span>: Sprite
    - <span style="color:#3AD900">sfIntRect</span>: Rect
    - <span style="color:#3AD900">sfVector2i</span>: Scale
    - <span style="color:#3AD900">sfVector2i</span>: Size
    - <span style="color:#3AD900">sfVector2f</span>: Coord
    - <span style="color:#FAD000">Animation_t</span>
    - Update
    - Display
    - Destroy

- <span style="color:#FAD000">Window_t</span>
    - <span style="color:#3AD900">sfVideoMode</span>: Mode
    - <span style="color:#3AD900">sfRenderWindow</span>: Window
    - <span style="color:#3AD900">sfColor</span>: Color
    - <span style="color:#FF7200">int</span>: Fps
    - Clear
    - Display
    - Destroy

- <span style="color:#FAD000">Mouse_t</span>
    - <span style="color:#3AD900">sfVector2f</span>: Coord
    - <span style="color:#FAD000">Sprite_t</span>
    - <span style="color:#FAD000">Event_t</span>
    - Update
    - Display
    - Destroy

- <span style="color:#FAD000">Animation_t</span>
    - <span style="color:#3AD900">sfVector2i</span>: NbFrames
    - <span style="color:#3AD900">sfTime</span>: Duration
    - <span style="color:#3AD900">sfTime</span>: Spend
    - Update

- <span style="color:#FAD000">Event_t</span>
    - Default
    - OnClick
    - OnHover

- <span style="color:#FAD000">Game_t</span>
    - <span style="color:#FF7200">char *</span>: Name
    - <span style="color:#FAD000">Window_t</span>
    - <span style="color:#FAD000">Mouse_t</span>
    - <span style="color:#3AD900">sfEvent</span>: Event
    - <span style="color:#FAD000">List_t</span>: Scenes
    - <span style="color:#FF7200">void *</span>: Component
    - Destroy

