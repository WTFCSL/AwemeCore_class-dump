//
//     Generated by private class-dump
//

@class NSArray, AWEAwemeModel;

@interface AWETeenGeneralActionPanelCell : UICollectionViewCell {
    AWEAwemeModel *_awemeModel;
    NSArray *_actionArray;
}

@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (copy, nonatomic) NSArray *actionArray;

+ (struct CGSize { double x0; double x1; })cellSize;

- (id)awemeModel;
- (void)setAwemeModel:(id)arg0;
- (void)p_setupUI;
- (void)setActionArray:(id)arg0;
- (id)actionArray;
- (void)configWithModel:(id)arg0 extra:(id)arg1;
- (void)playLikeAnimationWithModel:(id)arg0 status:(BOOL)arg1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;

@end
