//
//     Generated by private class-dump
//

@class AWEFavoriteFolderCombineModel;

@protocol AFDCollectionFolderListDataControllerProtocol <NSObject>

@property (nonatomic) long long totalFolderNumber;
@property (retain, nonatomic) AWEFavoriteFolderCombineModel *combineModel;

- (long long)totalFolderNumber;
- (void)setTotalFolderNumber:(long long)arg0;
- (void)setCombineModel:(id)arg0;
- (void)refreshCombineStyleWithCompletion:(id /* block */)arg0;
- (id)combineModel;

@end
