//
//     Generated by private class-dump
//

@class NSString;

@interface CKBeautyDataCategoryCombinedFilter : NSObject <CKBeautyDataFilterProtocol> {
    NSString *_region;
    long long _abGroup;
    long long _gender;
}

@property (copy, nonatomic) NSString *region;
@property (nonatomic) long long abGroup;
@property (nonatomic) long long gender;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDataFilterConfig:(id)arg0;
- (long long)abGroup;
- (id)region;
- (void)setRegion:(id)arg0;
- (void).cxx_destruct;
- (long long)gender;
- (void)setAbGroup:(long long)arg0;
- (void)setGender:(long long)arg0;
- (id)filter:(id)arg0;

@end