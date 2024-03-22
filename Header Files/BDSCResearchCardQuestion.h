//
//     Generated by private class-dump
//

@class NSString;

@interface BDSCResearchCardQuestion : NSObject {
    unsigned long long _type;
}

@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *info;
@property (readonly, nonatomic) BOOL hasUnknown;
@property (nonatomic) unsigned long long type;

+ (id)buildQuestionWithType:(unsigned long long)arg0;

- (id)info;
- (unsigned long long)type;
- (id)title;
- (void)setType:(unsigned long long)arg0;
- (BOOL)hasUnknown;

@end