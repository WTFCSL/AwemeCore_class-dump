//
//     Generated by private class-dump
//

@class LynxListScrollEventEmitter;

@interface IESECDraggableLynxUICollectionView : UICollectionView {
    BOOL _isLynxDragging;
    LynxListScrollEventEmitter *_scrollEventEmitter;
}

@property (nonatomic) BOOL isLynxDragging;
@property (retain, nonatomic) LynxListScrollEventEmitter *scrollEventEmitter;

- (BOOL)isLynxDragging;
- (void)setIsLynxDragging:(BOOL)arg0;
- (id)scrollEventEmitter;
- (void)setScrollEventEmitter:(id)arg0;
- (void).cxx_destruct;
- (void)moveItemAtIndexPath:(id)arg0 toIndexPath:(id)arg1;

@end
