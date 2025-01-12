//
//     Generated by private class-dump
//

@protocol AWEPostPageSlidesService <AWEPostPageBaseService>

@property (readonly, nonatomic) long long needSaveBackToPublishPageSignal;
@property (readonly, nonatomic) long long noSaveBackToPublishPageSignal;
@property (readonly, nonatomic) long long publishPageJumpToEditPageSignal;
@property (copy, nonatomic) id /* block */ getTableViewOffsetByCoverSize;
@property (nonatomic) BOOL isSyncingData;

- (void)updateMusicInfo;
- (void)originContextSnap;
- (BOOL)isContextEdited;
- (long long)needSaveBackToPublishPageSignal;
- (long long)noSaveBackToPublishPageSignal;
- (long long)publishPageJumpToEditPageSignal;
- (id /* block */)getTableViewOffsetByCoverSize;
- (void)setGetTableViewOffsetByCoverSize:(id /* block */)arg0;
- (BOOL)isSyncingData;
- (void)setIsSyncingData:(BOOL)arg0;

@end
