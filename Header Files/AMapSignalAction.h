//
//     Generated by private class-dump
//

@interface AMapSignalAction : NSObject {
    struct sigaction { union __sigaction_u { void /* function */ *__sa_handler; void /* function */ *__sa_sigaction; } __sigaction_u; unsigned int sa_mask; int sa_flags; } _signalAction;
}

@property (nonatomic) struct sigaction { union __sigaction_u { void /* function */ *__sa_handler; void /* function */ *__sa_sigaction; } __sigaction_u; unsigned int sa_mask; int sa_flags; } signalAction;

- (struct sigaction { union __sigaction_u { void /* function */ *x0; void /* function */ *x1; } x0; unsigned int x1; int x2; })signalAction;
- (void)setSignalAction:(struct sigaction { union __sigaction_u { void /* function */ *x0; void /* function */ *x1; } x0; unsigned int x1; int x2; })arg0;

@end
