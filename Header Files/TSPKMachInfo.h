//
//     Generated by private class-dump
//

@class NSString;

@interface TSPKMachInfo : NSObject {
    struct mach_header_64 { unsigned int x0; int x1; int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; } *_machHeader;
    long long _machSlide;
    NSString *_machName;
    long long _textVMStart;
    long long _textVMEnd;
}

@property (nonatomic) struct mach_header_64 { unsigned int x0; int x1; int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; } *machHeader;
@property (nonatomic) long long machSlide;
@property (copy, nonatomic) NSString *machName;
@property (nonatomic) long long textVMStart;
@property (nonatomic) long long textVMEnd;

- (struct mach_header_64 { unsigned int x0; int x1; int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; } *)machHeader;
- (void)setMachHeader:(struct mach_header_64 { unsigned int x0; int x1; int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; } *)arg0;
- (long long)machSlide;
- (void)fixSortedRules:(id)arg0;
- (id)initWithHeader:(struct mach_header_64 { unsigned int x0; int x1; int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; } *)arg0 slide:(long long)arg1 name:(const char *)arg2 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })arg3;
- (void)setMachSlide:(long long)arg0;
- (void)setTextVMStart:(long long)arg0;
- (void)setTextVMEnd:(long long)arg0;
- (long long)textVMStart;
- (long long)textVMEnd;
- (void)setMachName:(id)arg0;
- (id)machName;
- (void).cxx_destruct;

@end
