//
//     Generated by private class-dump
//

@class NSString;

@interface CKBeautyDataCategoryGenderFilter : NSObject <CKBeautyDataFilterProtocol> {
    long long _gender;
}

@property (nonatomic) long long gender;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithGender:(long long)arg0;
- (long long)getGenderOfCategory:(id)arg0;
- (long long)gender;
- (void)setGender:(long long)arg0;
- (id)filter:(id)arg0;

@end
