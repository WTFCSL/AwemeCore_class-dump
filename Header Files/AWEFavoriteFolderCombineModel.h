//
//     Generated by private class-dump
//

@class AWEURLModel;

@interface AWEFavoriteFolderCombineModel : AWEBaseApiModel {
    int _totalFolderNumber;
    AWEURLModel *_collectsCover;
}

@property (nonatomic) int totalFolderNumber;
@property (copy, nonatomic) AWEURLModel *collectsCover;

+ (id)JSONKeyPathsByPropertyKey;

- (int)totalFolderNumber;
- (void)setTotalFolderNumber:(int)arg0;
- (id)collectsCover;
- (void)setCollectsCover:(id)arg0;
- (void).cxx_destruct;

@end
