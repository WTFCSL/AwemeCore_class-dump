//
//     Generated by private class-dump
//

@class NSString;

@interface AWEGDAlbumTabInfoModel : AWEBaseApiModel {
    NSString *_tabName;
    NSString *_tabID;
    NSString *_totalCount;
}

@property (copy, nonatomic) NSString *tabName;
@property (copy, nonatomic) NSString *tabID;
@property (copy, nonatomic) NSString *totalCount;

+ (id)JSONKeyPathsByPropertyKey;

- (void)setTabID:(id)arg0;
- (void).cxx_destruct;
- (id)totalCount;
- (void)setTotalCount:(id)arg0;
- (id)tabID;
- (void)setTabName:(id)arg0;
- (id)tabName;

@end
