//
//     Generated by private class-dump
//

@class NSString;

@interface AWESearchPushModel : AWEBaseApiModel {
    NSString *_keyword;
    NSString *_displayKeyword;
}

@property (copy, nonatomic) NSString *keyword;
@property (copy, nonatomic) NSString *displayKeyword;

+ (id)JSONKeyPathsByPropertyKey;

- (id)displayKeyword;
- (void)setDisplayKeyword:(id)arg0;
- (void).cxx_destruct;
- (void)setKeyword:(id)arg0;
- (id)keyword;

@end
