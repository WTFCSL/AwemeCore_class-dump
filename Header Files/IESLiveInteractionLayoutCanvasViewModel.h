//
//     Generated by private class-dump
//

@class NSArray, IESLiveInteractionLayout;

@interface IESLiveInteractionLayoutCanvasViewModel : NSObject {
    BOOL _isEnlargeMode;
    IESLiveInteractionLayout *_layout;
    NSArray *_cellModels;
    id /* block */ _onCellModelsUpdateBlock;
}

@property (retain, nonatomic) IESLiveInteractionLayout *layout;
@property (copy, nonatomic) id /* block */ onCellModelsUpdateBlock;
@property (copy, nonatomic) NSArray *cellModels;
@property (nonatomic) BOOL isEnlargeMode;

- (id)cellModels;
- (void)setCellModels:(id)arg0;
- (id)cellModelWithIndex:(long long)arg0;
- (long long)viewIndexForUser:(id)arg0;
- (void)onCellModelsUpdated:(id /* block */)arg0;
- (void)updateWithLayout:(id)arg0;
- (void)setOnCellModelsUpdateBlock:(id /* block */)arg0;
- (id /* block */)onCellModelsUpdateBlock;
- (id)cellModelWithConfig:(id)arg0;
- (BOOL)isEnlargeMode;
- (void)updateWithCurrentLayout;
- (void)setIsEnlargeMode:(BOOL)arg0;
- (void)insertRTCSessionView:(id)arg0 linkMicUserID:(id)arg1 isLocalPreview:(BOOL)arg2 preferredFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg3;
- (void)updateCellModelsWithLayout:(id)arg0;
- (id)createCellModelsWithLayout:(id)arg0;
- (void)updateSlotConfigsWithSlots:(id)arg0;
- (void)setLayout:(id)arg0;
- (void).cxx_destruct;
- (id)layout;
- (BOOL)isValidIndex:(long long)arg0;
- (void)clean;

@end
