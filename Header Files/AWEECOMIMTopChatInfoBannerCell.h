//
//     Generated by private class-dump
//

@class NSString, AWEECOMIMChatTopInfoView;
@protocol AWEECOMIMTopChatInfoBannerCellDelegate;

@interface AWEECOMIMTopChatInfoBannerCell : UICollectionViewCell <AWEECOMIMChatTopInfoViewDelegate> {
    id<AWEECOMIMTopChatInfoBannerCellDelegate> _delegate;
    AWEECOMIMChatTopInfoView *_chatInfoView;
}

@property (retain, nonatomic) AWEECOMIMChatTopInfoView *chatInfoView;
@property (weak, nonatomic) id<AWEECOMIMTopChatInfoBannerCellDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)heightWithIsMultiItem:(BOOL)arg0;

- (void)bindItem:(id)arg0 itemIndex:(long long)arg1 itemCount:(long long)arg2;
- (void)chatTopInfoViewDidClickActionBtn:(id)arg0 itemIndex:(long long)arg1;
- (id)chatInfoView;
- (void)setChatInfoView:(id)arg0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)delegate;
- (void)setDelegate:(id)arg0;

@end