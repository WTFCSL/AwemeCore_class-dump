//
//     Generated by private class-dump
//

@class NSString, IESLiveCommentContext;

@interface IESLiveCommentVoiceInputPanelViewModel : NSObject {
    IESLiveCommentContext *_commentContext;
    NSString *_voiceToTextStr;
}

@property (retain, nonatomic) IESLiveCommentContext *commentContext;
@property (copy, nonatomic) NSString *voiceToTextStr;

- (id)commentContext;
- (void)setCommentContext:(id)arg0;
- (id)voiceRouter;
- (void)setVoiceToTextStr:(id)arg0;
- (id)voiceToTextStr;
- (void).cxx_destruct;

@end