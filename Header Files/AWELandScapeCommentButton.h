//
//     Generated by private class-dump
//

@class AWEAwemeModel;

@interface AWELandScapeCommentButton : AWELandScapeBottomButton {
    AWEAwemeModel *_currentModel;
}

@property (retain, nonatomic) AWEAwemeModel *currentModel;

- (void)updateCommentCount;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)updateWithModel:(id)arg0;
- (void)setCurrentModel:(id)arg0;
- (id)currentModel;

@end
