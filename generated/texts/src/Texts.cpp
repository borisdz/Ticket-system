/* DO NOT EDIT THIS FILE */
/* This file is autogenerated by the text-database code generator */

#include <stdarg.h>
#include <touchgfx/TextProvider.hpp>
#include <touchgfx/Texts.hpp>
#include <touchgfx/TypedText.hpp>
#include <touchgfx/Unicode.hpp>
#include <touchgfx/hal/HAL.hpp>
#include <touchgfx/lcd/LCD.hpp>
#include <texts/TypedTextDatabase.hpp>

uint16_t touchgfx::Font::getStringWidth(const touchgfx::Unicode::UnicodeChar* text, ...) const
{
    va_list pArg;
    va_start(pArg, text);
    uint16_t width = getStringWidthLTR(TEXT_DIRECTION_LTR, text, pArg);
    va_end(pArg);
    return width;
}

uint16_t touchgfx::Font::getStringWidth(touchgfx::TextDirection textDirection, const touchgfx::Unicode::UnicodeChar* text, ...) const
{
    va_list pArg;
    va_start(pArg, text);
    uint16_t width = getStringWidthLTR(textDirection, text, pArg);
    va_end(pArg);
    return width;
}

touchgfx::Unicode::UnicodeChar touchgfx::TextProvider::getNextLigature(TextDirection direction)
{
    if (fontGsubTable && nextCharacters.peekChar())
    {
        substituteGlyphs();
        if (nextCharacters.peekChar(1) == 0x093F) // Hindi I-matra
        {
            nextCharacters.replaceAt1(nextCharacters.peekChar());
            nextCharacters.replaceAt0(0x093F);
        }
    }
    return getNextChar();
}

void touchgfx::TextProvider::initializeInternal()
{
    fillInputBuffer();
}

void touchgfx::LCD::drawString(touchgfx::Rect widgetArea, const touchgfx::Rect& invalidatedArea, const touchgfx::LCD::StringVisuals& stringVisuals, const touchgfx::Unicode::UnicodeChar* format, ...)
{
    va_list pArg;
    va_start(pArg, format);
    drawStringLTR(widgetArea, invalidatedArea, stringVisuals, format, pArg);
    va_end(pArg);
}

// Default TypedTextDatabase
extern const touchgfx::TypedText::TypedTextData* const typedTextDatabaseArray[];

TEXT_LOCATION_FLASH_PRAGMA
KEEP extern const touchgfx::Unicode::UnicodeChar texts_all_languages[] TEXT_LOCATION_FLASH_ATTRIBUTE = {
    0x4e, 0x75, 0x6d, 0x62, 0x65, 0x72, 0x20, 0x6f, 0x66, 0x20, 0x74, 0x69, 0x63, 0x6b, 0x65, 0x74, 0x73, 0x3a, 0x20, 0x2, 0x0, // @0 "Number of tickets: <>"
    0x50, 0x61, 0x79, 0x20, 0x77, 0x69, 0x74, 0x68, 0x20, 0x79, 0x6f, 0x75, 0x72, 0x20, 0x63, 0x61, 0x72, 0x64, 0x20, 0x62, 0x65, 0x6c, 0x6c, 0x6f, 0x77, 0x3a, 0x0, // @21 "Pay with your card bellow:"
    0x28, 0x53, 0x65, 0x6c, 0x65, 0x63, 0x74, 0x20, 0x61, 0x20, 0x63, 0x69, 0x74, 0x79, 0x20, 0x66, 0x72, 0x6f, 0x6d, 0x20, 0x6c, 0x69, 0x73, 0x74, 0x29, 0x0, // @48 "(Select a city from list)"
    0x4e, 0x75, 0x6d, 0x62, 0x65, 0x72, 0x20, 0x6f, 0x66, 0x20, 0x74, 0x69, 0x63, 0x6b, 0x65, 0x74, 0x73, 0x3a, 0x2, 0x0, // @74 "Number of tickets:<>"
    0x53, 0x65, 0x6c, 0x65, 0x63, 0x74, 0x65, 0x64, 0x20, 0x64, 0x65, 0x73, 0x74, 0x69, 0x6e, 0x61, 0x74, 0x69, 0x6f, 0x6e, 0x3a, 0x0, // @94 "Selected destination:"
    0x44, 0x65, 0x6d, 0x69, 0x72, 0x20, 0x4b, 0x61, 0x70, 0x69, 0x6a, 0x61, 0x0, // @116 "Demir Kapija"
    0x44, 0x65, 0x73, 0x74, 0x69, 0x6e, 0x61, 0x74, 0x69, 0x6f, 0x6e, 0x3a, 0x0, // @129 "Destination:"
    0x54, 0x72, 0x61, 0x69, 0x6e, 0x20, 0x74, 0x69, 0x63, 0x6b, 0x65, 0x74, 0x0, // @142 "Train ticket"
    0x42, 0x75, 0x73, 0x20, 0x74, 0x69, 0x63, 0x6b, 0x65, 0x74, 0x0, // @155 "Bus ticket"
    0x47, 0x65, 0x76, 0x67, 0x65, 0x6c, 0x69, 0x6a, 0x61, 0x0, // @166 "Gevgelija"
    0x44, 0x72, 0x61, 0x63, 0x68, 0x65, 0x76, 0x6f, 0x0, // @176 "Drachevo"
    0x4e, 0x65, 0x67, 0x6f, 0x74, 0x69, 0x6e, 0x6f, 0x0, // @185 "Negotino"
    0x4e, 0x65, 0x77, 0x20, 0x54, 0x65, 0x78, 0x74, 0x0, // @194 "New Text"
    0x47, 0x72, 0x61, 0x64, 0x73, 0x6b, 0x6f, 0x0, // @203 "Gradsko"
    0x43, 0x61, 0x6e, 0x63, 0x65, 0x6c, 0x0, // @211 "Cancel"
    0x53, 0x6b, 0x6f, 0x70, 0x6a, 0x65, 0x0, // @218 "Skopje"
    0x53, 0x74, 0x61, 0x72, 0x74, 0x0, // @225 "Start"
    0x56, 0x65, 0x6c, 0x65, 0x73, 0x0, // @231 "Veles"
    0x4e, 0x65, 0x78, 0x74, 0x0, // @237 "Next"
    0x53, 0x74, 0x6f, 0x70, 0x0, // @242 "Stop"
    0x42, 0x75, 0x79, 0x0, // @247 "Buy"
    0x30, 0x0 // @251 "0"
};

TEXT_LOCATION_FLASH_PRAGMA
KEEP extern const uint32_t indicesGb[] TEXT_LOCATION_FLASH_ATTRIBUTE;

// Array holding dynamically installed languages
struct TranslationHeader
{
    uint32_t offset_to_texts;
    uint32_t offset_to_indices;
    uint32_t offset_to_typedtext;
};
static const TranslationHeader* languagesArray[1] = { 0 };

// Compiled and linked in languages
static const uint32_t* const staticLanguageIndices[] = {
    indicesGb
};

touchgfx::LanguageId touchgfx::Texts::currentLanguage = static_cast<touchgfx::LanguageId>(0);
static const touchgfx::Unicode::UnicodeChar* currentLanguagePtr = 0;
static const uint32_t* currentLanguageIndices = 0;

void touchgfx::Texts::setLanguage(touchgfx::LanguageId id)
{
    const touchgfx::TypedText::TypedTextData* currentLanguageTypedText = 0;
    if (id < 1)
    {
        if (languagesArray[id] != 0)
        {
            // Dynamic translation is added
            const TranslationHeader* translation = languagesArray[id];
            currentLanguagePtr = (const touchgfx::Unicode::UnicodeChar*)(((const uint8_t*)translation) + translation->offset_to_texts);
            currentLanguageIndices = (const uint32_t*)(((const uint8_t*)translation) + translation->offset_to_indices);
            currentLanguageTypedText = (const touchgfx::TypedText::TypedTextData*)(((const uint8_t*)translation) + translation->offset_to_typedtext);
        }
        else
        {
            // Compiled and linked in languages
            currentLanguagePtr = texts_all_languages;
            currentLanguageIndices = staticLanguageIndices[id];
            currentLanguageTypedText = typedTextDatabaseArray[id];
        }
    }

    if (currentLanguageTypedText)
    {
        currentLanguage = id;
        touchgfx::TypedText::registerTypedTextDatabase(currentLanguageTypedText,
                                                       TypedTextDatabase::getFonts(), TypedTextDatabase::getInstanceSize());
    }
}

void touchgfx::Texts::setTranslation(touchgfx::LanguageId id, const void* translation)
{
    languagesArray[id] = (const TranslationHeader*)translation;
}

const touchgfx::Unicode::UnicodeChar* touchgfx::Texts::getText(TypedTextId id) const
{
    return &currentLanguagePtr[currentLanguageIndices[id]];
}
