//
//     Generated by private class-dump
//

@interface AFDCloseFriendsMomentAlbumSectionController : AWEBaseListSectionController {
    id /* block */ _dismissWithCurrentIndex;
}

@property (copy, nonatomic) id /* block */ dismissWithCurrentIndex;

- (void)configCell:(id)arg0 index:(long long)arg1 model:(id)arg2;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)arg0 model:(id)arg1 collectionViewSize:(struct CGSize { double x0; double x1; })arg2;
- (void)didBindSectionViewModel;
- (void)didSelectItemAtIndex:(long long)arg0 model:(id)arg1;
- (Class)cellClassForModel:(id)arg0 index:(long long)arg1;
- (void)setDismissWithCurrentIndex:(id /* block */)arg0;
- (id /* block */)dismissWithCurrentIndex;
- (id)init;
- (void).cxx_destruct;
- (double)minimumLineSpacing;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })inset;

@end
