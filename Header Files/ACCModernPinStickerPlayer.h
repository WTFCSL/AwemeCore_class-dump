//
//     Generated by private class-dump
//

@class NSString, NSDictionary, ACCModernPinStickerViewControllerInputData, UIView, UIImageView;

@interface ACCModernPinStickerPlayer : NSObject {
    ACCModernPinStickerViewControllerInputData *_inputData;
    UIView *_playerContainer;
    UIImageView *_interactionImageView;
    id /* block */ _activeStickerBlock;
    UIView *_selectedStickerView;
    NSString *_currentStickerIds;
    NSDictionary *_initialStickerInfoDict;
    NSDictionary *_initialStickerSizeDict;
}

@property (retain, nonatomic) UIView *selectedStickerView;
@property (copy, nonatomic) NSString *currentStickerIds;
@property (copy, nonatomic) NSDictionary *initialStickerInfoDict;
@property (copy, nonatomic) NSDictionary *initialStickerSizeDict;
@property (retain, nonatomic) ACCModernPinStickerViewControllerInputData *inputData;
@property (retain, nonatomic) UIView *playerContainer;
@property (retain, nonatomic) UIImageView *interactionImageView;
@property (copy, nonatomic) id /* block */ activeStickerBlock;

- (id)playerContainer;
- (void)setPlayerContainer:(id)arg0;
- (id)selectedStickerView;
- (void)setSelectedStickerView:(id)arg0;
- (id)interactionImageView;
- (void)setInteractionImageView:(id)arg0;
- (void)setCurrentStickerIds:(id)arg0;
- (id)currentStickerIds;
- (void)configWhenContainerDidAppear;
- (void)configWhenContainerWillDisappear;
- (void)setPlayerContainerFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 content:(id)arg1;
- (id /* block */)activeStickerBlock;
- (void)setActiveStickerBlock:(id /* block */)arg0;
- (id)initialStickerInfoDict;
- (void)setInitialStickerInfoDict:(id)arg0;
- (id)initialStickerSizeDict;
- (void)setInitialStickerSizeDict:(id)arg0;
- (void).cxx_destruct;
- (id)contentView;
- (id)inputData;
- (void)setInputData:(id)arg0;

@end