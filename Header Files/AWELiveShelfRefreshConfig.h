//
//     Generated by private class-dump
//

@class NSNumber, NSString;

@interface AWELiveShelfRefreshConfig : MTLModel <MTLJSONSerializing> {
    unsigned long long _refreshType;
    NSNumber *_duration;
}

@property (nonatomic) unsigned long long refreshType;
@property (retain, nonatomic) NSNumber *duration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void)setRefreshType:(unsigned long long)arg0;
- (unsigned long long)refreshType;
- (void).cxx_destruct;
- (id)duration;
- (void)setDuration:(id)arg0;

@end
