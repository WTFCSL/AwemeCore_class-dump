//
//     Generated by private class-dump
//

@class NSString, UIViewController, AWEAwemeModel;
@protocol AWECommentListViewControllerProtocol;

@interface IESGCPCommentPanelController_Douyin : NSObject <IESGCPCommentPanelViewControllerProtocol> {
    AWEAwemeModel *_awemeModel;
    UIViewController<AWECommentListViewControllerProtocol> *_commentVC;
    NSString *_pageType;
    NSString *_adEventName;
    NSString *_referString;
}

@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) UIViewController<AWECommentListViewControllerProtocol> *commentVC;
@property (copy, nonatomic) NSString *pageType;
@property (copy, nonatomic) NSString *adEventName;
@property (copy, nonatomic) NSString *referString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)awemeModel;
- (id)referString;
- (void)setAwemeModel:(id)arg0;
- (void)setReferString:(id)arg0;
- (id)adEventName;
- (void)setAdEventName:(id)arg0;
- (id)commentVC;
- (void)setCommentVC:(id)arg0;
- (unsigned long long)commentPanelEnterSource:(id)arg0;
- (void)updateCommentPanelAwemeModel:(id)arg0;
- (void)showCommentPanelWithShowInputView:(BOOL)arg0 exterMethod:(id)arg1;
- (void)configCommentVC;
- (id)pageType;
- (void).cxx_destruct;
- (void)setPageType:(id)arg0;

@end
