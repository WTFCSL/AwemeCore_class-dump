//
//     Generated by private class-dump
//

@class NSArray;

@interface TSPKBinaryInfo : NSObject {
    NSArray *_machInfos;
}

@property (retain, nonatomic) NSArray *machInfos;

+ (id)sharedInstance;

- (id)machInfos;
- (BOOL)isRulesAllFixed:(id)arg0;
- (BOOL)fixSortedRules:(id)arg0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })textRangeForHeader:(struct mach_header_64 { unsigned int x0; int x1; int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; } *)arg0;
- (void)setMachInfos:(id)arg0;
- (unsigned long long)slideOfMachName:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)setup;

@end
