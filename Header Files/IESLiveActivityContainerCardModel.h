//
//     Generated by private class-dump
//

@class NSNumber, NSString;

@interface IESLiveActivityContainerCardModel : IESLiveDynamicModel {
    BOOL _showInRightBotttom;
    struct CGSize { double width; double height; } _cardViewSize;
}

@property (nonatomic) double cardViewBottomY;
@property (nonatomic) double cardViewLeftX;
@property (nonatomic) struct CGSize { double width; double height; } cardViewSize;
@property (copy, nonatomic) id /* block */ cardDisappearCompletionBlock;
@property (nonatomic) BOOL showInRightBotttom;
@property (retain, nonatomic) NSNumber *showTime;
@property (retain, nonatomic) NSNumber *durationToShowTime;
@property (copy, nonatomic) NSString *detailPageURL;
@property (copy, nonatomic) NSString *containerCardURL;
@property (copy, nonatomic) NSString *toolbarEntranceKey;

- (struct CGSize { double x0; double x1; })cardViewSize;
- (void)setCardViewSize:(struct CGSize { double x0; double x1; })arg0;
- (BOOL)showInRightBotttom;
- (void)setShowInRightBotttom:(BOOL)arg0;
- (id)init;
- (id)description;

@end