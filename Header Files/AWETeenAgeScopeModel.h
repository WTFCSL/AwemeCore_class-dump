//
//     Generated by private class-dump
//

@class NSString;

@interface AWETeenAgeScopeModel : AWEBaseApiModel {
    NSString *_title;
    NSString *_ageScopeDesc;
    unsigned long long _ageScope;
}

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *ageScopeDesc;
@property (nonatomic) unsigned long long ageScope;

+ (id)JSONKeyPathsByPropertyKey;

- (unsigned long long)ageScope;
- (id)ageScopeDesc;
- (void)setAgeScopeDesc:(id)arg0;
- (void)setAgeScope:(unsigned long long)arg0;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:(id)arg0;

@end
