//
//     Generated by private class-dump
//

@class NSString;
@protocol BDXLynxInputBracketRichTextFormaterUIDelegate;

@interface BDXLynxInputBracketRichTextFormater : NSObject <BDXLynxInputEmojiFormater> {
    id<BDXLynxInputBracketRichTextFormaterUIDelegate> _UIDelegate;
}

@property (weak, nonatomic) id<BDXLynxInputBracketRichTextFormaterUIDelegate> UIDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedFormater;

- (id)formateRawText:(id)arg0 defaultAttibutes:(id)arg1;
- (void).cxx_destruct;
- (void)setUIDelegate:(id)arg0;
- (id)UIDelegate;

@end
