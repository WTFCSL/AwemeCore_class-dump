//
//     Generated by private class-dump
//

@class NSString;

@interface CKBeautyDataFilterConfig : NSObject {
    BOOL _shouldUseComposerParams;
    NSString *_region;
    long long _abGroup;
    long long _gender;
}

@property (copy, nonatomic) NSString *region;
@property (nonatomic) long long abGroup;
@property (nonatomic) long long gender;
@property (nonatomic) BOOL shouldUseComposerParams;

- (BOOL)shouldUseComposerParams;
- (void)setShouldUseComposerParams:(BOOL)arg0;
- (long long)abGroup;
- (id)region;
- (id)init;
- (void)setRegion:(id)arg0;
- (void).cxx_destruct;
- (long long)gender;
- (void)setAbGroup:(long long)arg0;
- (void)setGender:(long long)arg0;

@end
