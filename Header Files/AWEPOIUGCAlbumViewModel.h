//
//     Generated by private class-dump
//

@class NSDate;

@interface AWEPOIUGCAlbumViewModel : AWEAlbumBaseViewModel {
    NSDate *_startNextTime;
}

@property (retain, nonatomic) NSDate *startNextTime;

- (void)setStartNextTime:(id)arg0;
- (id)startNextTime;
- (void)goToNextWithMultiSelect:(BOOL)arg0;
- (void)__openEditorWithAssets:(id)arg0 publishModel:(id)arg1;
- (void)__openInfiniEditorWithAssets:(id)arg0 publishModel:(id)arg1;
- (void)__openOldEditorWithAssets:(id)arg0 publishModel:(id)arg1;
- (void)trackEnterEditFromAlbum;
- (void)trackTransferStatus:(id)arg0;
- (void).cxx_destruct;

@end