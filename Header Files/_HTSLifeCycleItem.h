//
//     Generated by private class-dump
//

@protocol HTSAppLifeCycle;

@interface _HTSLifeCycleItem : NSObject {
    id<HTSAppLifeCycle> _module;
    struct mach_header_64 { unsigned int x0; int x1; int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; } *_machHeader;
}

@property (retain, nonatomic) id<HTSAppLifeCycle> module;
@property (nonatomic) struct mach_header_64 { unsigned int x0; int x1; int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; } *machHeader;

- (struct mach_header_64 { unsigned int x0; int x1; int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; } *)machHeader;
- (void)setMachHeader:(struct mach_header_64 { unsigned int x0; int x1; int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; } *)arg0;
- (void).cxx_destruct;
- (id)module;
- (void)setModule:(id)arg0;

@end