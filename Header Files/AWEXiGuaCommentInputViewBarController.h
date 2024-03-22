//
//     Generated by private class-dump
//

@class AWEXiGuaCommentInputView, NSString, AWEAwemeModel, AWEAwemeDetailBottomBarCommonContext;

@interface AWEXiGuaCommentInputViewBarController : NSObject <AWEAwemeDetailBottomBarController> {
    AWEAwemeModel *_awemeModel;
    AWEAwemeDetailBottomBarCommonContext *_context;
    AWEXiGuaCommentInputView *_xiguaInputView;
}

@property (readonly, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) AWEAwemeDetailBottomBarCommonContext *context;
@property (retain, nonatomic) AWEXiGuaCommentInputView *xiguaInputView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)awemeModel;
- (void)updateBottomBarWithAweme:(id)arg0 updateTiming:(long long)arg1;
- (BOOL)canShowBottomBarForAweme:(id)arg0;
- (id)xiguaInputView;
- (void)setXiguaInputView:(id)arg0;
- (void).cxx_destruct;
- (void)setContext:(id)arg0;
- (id)context;
- (Class)contextClass;
- (id)bottomBarView;

@end