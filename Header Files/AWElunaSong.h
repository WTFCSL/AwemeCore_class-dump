//
//     Generated by private class-dump
//

@class NSString;

@interface AWElunaSong : AWEBaseApiModel {
    BOOL _lunaCopyright;
    NSString *_lunaSongId;
}

@property (copy, nonatomic) NSString *lunaSongId;
@property (nonatomic) BOOL lunaCopyright;

+ (id)JSONKeyPathsByPropertyKey;

- (void)setLunaSongId:(id)arg0;
- (id)lunaSongId;
- (BOOL)lunaCopyright;
- (void)setLunaCopyright:(BOOL)arg0;
- (void).cxx_destruct;

@end