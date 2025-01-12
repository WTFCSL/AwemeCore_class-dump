//
//     Generated by private class-dump
//

@class NSString, NSArray, NSMutableDictionary, UIImage, AWEURLModel;

@interface AWEShareTokenNoteCardConfigModel : NSObject {
    BOOL _isWebViewShare;
    BOOL _isLiving;
    BOOL _isInviteToChannel;
    BOOL _actionDisabled;
    AWEURLModel *_coverURL;
    NSString *_title;
    NSString *_actionTitle;
    AWEURLModel *_titleIconURL;
    NSString *_sharerName;
    NSArray *_sharerImageList;
    NSString *_message;
    NSMutableDictionary *_reportCommitDictionary;
    NSMutableDictionary *_reportEventDictionary;
    UIImage *_coverImage;
    unsigned long long _liveStage;
    id /* block */ _turnToCardBlock;
    id /* block */ _turnToSharerBlock;
    id /* block */ _reshowCardViewBlock;
    id /* block */ _tapDismissButtonBlock;
    id /* block */ _tapReportButtonBlock;
    NSMutableDictionary *_ecommerceInfoDictionary;
    NSString *_itemID;
    NSString *_userID;
}

@property (retain, nonatomic) AWEURLModel *coverURL;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *actionTitle;
@property (retain, nonatomic) AWEURLModel *titleIconURL;
@property (copy, nonatomic) NSString *sharerName;
@property (retain, nonatomic) NSArray *sharerImageList;
@property (copy, nonatomic) NSString *message;
@property (nonatomic) BOOL isWebViewShare;
@property (retain, nonatomic) NSMutableDictionary *reportCommitDictionary;
@property (retain, nonatomic) NSMutableDictionary *reportEventDictionary;
@property (retain, nonatomic) UIImage *coverImage;
@property (nonatomic) BOOL isLiving;
@property (nonatomic) unsigned long long liveStage;
@property (nonatomic) BOOL isInviteToChannel;
@property (nonatomic) BOOL actionDisabled;
@property (copy, nonatomic) id /* block */ turnToCardBlock;
@property (copy, nonatomic) id /* block */ turnToSharerBlock;
@property (copy, nonatomic) id /* block */ reshowCardViewBlock;
@property (copy, nonatomic) id /* block */ tapDismissButtonBlock;
@property (copy, nonatomic) id /* block */ tapReportButtonBlock;
@property (retain, nonatomic) NSMutableDictionary *ecommerceInfoDictionary;
@property (copy, nonatomic) NSString *itemID;
@property (copy, nonatomic) NSString *userID;

- (void)setCoverImage:(id)arg0;
- (BOOL)isLiving;
- (void)setIsLiving:(BOOL)arg0;
- (id /* block */)tapDismissButtonBlock;
- (void)setTapDismissButtonBlock:(id /* block */)arg0;
- (id /* block */)turnToSharerBlock;
- (void)setTurnToSharerBlock:(id /* block */)arg0;
- (void)setReshowCardViewBlock:(id /* block */)arg0;
- (void)setReportCommitDictionary:(id)arg0;
- (id)reportCommitDictionary;
- (id /* block */)reshowCardViewBlock;
- (void)setEcommerceInfoDictionary:(id)arg0;
- (void)setTurnToCardBlock:(id /* block */)arg0;
- (void)setReportEventDictionary:(id)arg0;
- (void)setLiveStage:(unsigned long long)arg0;
- (void)setIsInviteToChannel:(BOOL)arg0;
- (void)setSharerName:(id)arg0;
- (void)setSharerImageList:(id)arg0;
- (void)setIsWebViewShare:(BOOL)arg0;
- (void)setActionDisabled:(BOOL)arg0;
- (void)setTitleIconURL:(id)arg0;
- (void)setTapReportButtonBlock:(id /* block */)arg0;
- (id)reportEventDictionary;
- (id)ecommerceInfoDictionary;
- (id /* block */)tapReportButtonBlock;
- (id /* block */)turnToCardBlock;
- (id)sharerImageList;
- (id)sharerName;
- (BOOL)isInviteToChannel;
- (BOOL)isWebViewShare;
- (unsigned long long)liveStage;
- (BOOL)actionDisabled;
- (id)titleIconURL;
- (id)userID;
- (void)setMessage:(id)arg0;
- (id)actionTitle;
- (void).cxx_destruct;
- (void)setUserID:(id)arg0;
- (id)message;
- (void)setActionTitle:(id)arg0;
- (id)itemID;
- (void)setItemID:(id)arg0;
- (id)title;
- (void)setTitle:(id)arg0;
- (id)coverImage;
- (id)coverURL;
- (void)setCoverURL:(id)arg0;

@end
