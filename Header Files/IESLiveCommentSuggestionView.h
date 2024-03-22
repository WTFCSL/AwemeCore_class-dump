//
//     Generated by private class-dump
//

@class IESLiveCommentQuickReplyView, NSString;

@interface IESLiveCommentSuggestionView : UIView <IESLivePublicScreenComponent> {
    IESLiveCommentQuickReplyView *_quickReplyView;
}

@property (retain, nonatomic) IESLiveCommentQuickReplyView *quickReplyView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGSize { double x0; double x1; })pluginLayoutContentSize;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })pluginLayoutContentInsets;
- (id)initWithContents:(id)arg0 contentColor:(id)arg1;
- (void)refreshLayoutWithLeftMargin:(double)arg0;
- (void)startFoldAnimationWithDuration:(double)arg0;
- (BOOL)widthEqualToPublicScreen;
- (void)setQuickReplyView:(id)arg0;
- (void)quickReplyClickWithContentView:(id)arg0;
- (id)quickReplyView;
- (void)transition;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)viewType;
- (long long)targetContainer;

@end
