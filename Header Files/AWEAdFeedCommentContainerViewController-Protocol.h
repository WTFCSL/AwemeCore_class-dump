//
//     Generated by private class-dump
//

@class NSString, UITableView;
@protocol AWECommentGesProtocol;

@protocol AWEAdFeedCommentContainerViewController <AWECrotocol>

@property (weak, nonatomic) id<AWECommentGesProtocol> gesDelegate;
@property (nonatomic) BOOL isShowing;
@property (nonatomic) BOOL fromCommentVC;
@property (nonatomic) BOOL isBGColorWhite;
@property (nonatomic) BOOL isShowInContainerView;
@property (copy, nonatomic) NSString *referString;
@property (copy, nonatomic) NSString *accountType;
@property (retain, nonatomic) UITableView *tableView;

- (id)referString;
- (void)setIsShowing:(BOOL)arg0;
- (void)setReferString:(id)arg0;
- (void)setIsBGColorWhite:(BOOL)arg0;
- (void)setIsShowInContainerView:(BOOL)arg0;
- (void)setGesDelegate:(id)arg0;
- (void)setFromCommentVC:(BOOL)arg0;
- (id)gesDelegate;
- (BOOL)fromCommentVC;
- (BOOL)isBGColorWhite;
- (BOOL)isShowInContainerView;
- (void)commentTabChangedWithShow:(BOOL)arg0;
- (double)calculateStayTime;
- (id)initWithContext:(id)arg0;
- (void)setTableView:(id)arg0;
- (id)tableView;
- (id)accountType;
- (BOOL)isShowing;
- (void)setAccountType:(id)arg0;

@end
