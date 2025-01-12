//
//     Generated by private class-dump
//

@class AWESelfUserInfoModel, AWERankListSelfItemModel, NSArray;

@interface AWEHGGetRankDataRespModel : NSObject {
    unsigned long long _pageNum;
    unsigned long long _totalNum;
    AWERankListSelfItemModel *_selfItem;
    AWESelfUserInfoModel *_selfUserInfo;
    NSArray *_items;
}

@property (nonatomic) unsigned long long pageNum;
@property (nonatomic) unsigned long long totalNum;
@property (retain, nonatomic) AWERankListSelfItemModel *selfItem;
@property (retain, nonatomic) AWESelfUserInfoModel *selfUserInfo;
@property (retain, nonatomic) NSArray *items;

+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;

- (unsigned long long)totalNum;
- (void)setTotalNum:(unsigned long long)arg0;
- (void)setPageNum:(unsigned long long)arg0;
- (unsigned long long)pageNum;
- (id)selfUserInfo;
- (void)setSelfUserInfo:(id)arg0;
- (void)setItems:(id)arg0;
- (void).cxx_destruct;
- (id)items;
- (void)setSelfItem:(id)arg0;
- (id)selfItem;

@end
