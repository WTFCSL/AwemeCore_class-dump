//
//     Generated by private class-dump
//

@class AWEProfileExtensionAreaCardModel, AWEUserModel, NSDictionary, UILabel, UIView, BDImageView;
@protocol AWEECProfileExtensionAreaCardDelegate;

@interface AWEECProfileExtensionAreaCard : UIView {
    BOOL _hasUnread;
    BOOL _isOrderCard;
    BOOL _isIconRepeat;
    id<AWEECProfileExtensionAreaCardDelegate> _delegate;
    BDImageView *_leftImageView;
    UILabel *_titleLabel;
    UILabel *_subTitleLabel;
    UIView *_dotView;
    AWEProfileExtensionAreaCardModel *_cardModel;
    NSDictionary *_cardData;
    AWEUserModel *_userModel;
    double _cardWidth;
    unsigned long long _cardIndex;
    NSDictionary *_extraInfoDict;
    id /* block */ _didTapCardViewBlock;
}

@property (retain, nonatomic) BDImageView *leftImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UIView *dotView;
@property (retain, nonatomic) AWEProfileExtensionAreaCardModel *cardModel;
@property (copy, nonatomic) NSDictionary *cardData;
@property (retain, nonatomic) AWEUserModel *userModel;
@property (nonatomic) BOOL hasUnread;
@property (nonatomic) double cardWidth;
@property (nonatomic) unsigned long long cardIndex;
@property (nonatomic) BOOL isOrderCard;
@property (nonatomic) BOOL isIconRepeat;
@property (copy, nonatomic) NSDictionary *extraInfoDict;
@property (copy, nonatomic) id /* block */ didTapCardViewBlock;
@property (weak, nonatomic) id<AWEECProfileExtensionAreaCardDelegate> delegate;

- (void)cardWillAppear;
- (void)cardDidDisappear;
- (id)cardModel;
- (void)setCardModel:(id)arg0;
- (void)setExtraInfoDict:(id)arg0;
- (id)extraInfoDict;
- (void)setDidTapCardViewBlock:(id /* block */)arg0;
- (id /* block */)didTapCardViewBlock;
- (double)widthOfCard;
- (void)setCardIndex:(unsigned long long)arg0;
- (unsigned long long)cardIndex;
- (BOOL)shouldShowDot;
- (BOOL)userIsMaster;
- (void)setHasUnread:(BOOL)arg0;
- (void)configHasUnread;
- (BOOL)isOrderCard;
- (BOOL)isIconRepeat;
- (void)setIsOrderCard:(BOOL)arg0;
- (void)setIsIconRepeat:(BOOL)arg0;
- (void)viewTapped;
- (void)updateViewWithShowDot:(BOOL)arg0;
- (void)updateOrderToast;
- (id)initWithUserModel:(id)arg0 cardModel:(id)arg1 extraInfoDict:(id)arg2 cardIndex:(unsigned long long)arg3 cardData:(id)arg4 isOrderCard:(BOOL)arg5 isIconRepeat:(BOOL)arg6 didTapCardViewBlock:(id /* block */)arg7;
- (BOOL)isDotViewHidden;
- (id)init;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)userModel;
- (void)setUserModel:(id)arg0;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (void)updateView;
- (void)setTitleLabel:(id)arg0;
- (id)dotView;
- (void)setDotView:(id)arg0;
- (void)setupUI;
- (id)subTitleLabel;
- (void)setSubTitleLabel:(id)arg0;
- (id)cardData;
- (void)setCardData:(id)arg0;
- (double)cardWidth;
- (void)setCardWidth:(double)arg0;
- (id)leftImageView;
- (BOOL)hasUnread;
- (void)setLeftImageView:(id)arg0;

@end
