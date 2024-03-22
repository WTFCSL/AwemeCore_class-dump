//
//     Generated by private class-dump
//

@class NSString, NSArray;

@interface AWEClueStoreVideoModel : MTLModel <MTLJSONSerializing> {
    NSString *_vid;
    long long _itemID;
    NSArray *_coverURLs;
    NSArray *_playAddressURLs;
    double _width;
    double _height;
}

@property (copy, nonatomic) NSString *vid;
@property (nonatomic) long long itemID;
@property (copy, nonatomic) NSArray *coverURLs;
@property (copy, nonatomic) NSArray *playAddressURLs;
@property (nonatomic) double width;
@property (nonatomic) double height;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)automaticallyDefaultMapping;
+ (id)JSONKeyPathsByPropertyKey;

- (id)vid;
- (void)setVid:(id)arg0;
- (id)coverURLs;
- (void)setCoverURLs:(id)arg0;
- (id)playAddressURLs;
- (void)setPlayAddressURLs:(id)arg0;
- (void).cxx_destruct;
- (double)height;
- (long long)itemID;
- (void)setItemID:(long long)arg0;
- (void)setWidth:(double)arg0;
- (void)setHeight:(double)arg0;
- (double)width;

@end
