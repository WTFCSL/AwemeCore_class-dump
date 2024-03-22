//
//     Generated by private class-dump
//

@class UIView;
@protocol DitoMultiTabStripViewProtocol;

@interface DitoMultiTabStripCollectionCell : UICollectionViewCell {
    UIView *_indexLineView;
    UIView<DitoMultiTabStripViewProtocol> *_bizContentView;
}

@property (retain, nonatomic) UIView<DitoMultiTabStripViewProtocol> *bizContentView;
@property (retain, nonatomic) UIView *indexLineView;

- (id)indexLineView;
- (void)configWithContent:(id)arg0;
- (id)bizContentView;
- (void)setBizContentView:(id)arg0;
- (void)setIndexLineView:(id)arg0;
- (void).cxx_destruct;
- (void)prepareForReuse;

@end
