//
//     Generated by private class-dump
//

@class NSString;
@protocol BDXBracketRichTextFormaterUIDelegate;

@interface BDXBracketRichTextFormater : NSObject <BDXRichTextFormater> {
    id<BDXBracketRichTextFormaterUIDelegate> _UIDelegate;
}

@property (weak, nonatomic) id<BDXBracketRichTextFormaterUIDelegate> UIDelegate;
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
