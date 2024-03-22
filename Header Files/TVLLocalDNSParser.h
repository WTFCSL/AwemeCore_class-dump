//
//     Generated by private class-dump
//

@interface TVLLocalDNSParser : TVLBaseDNSParser {
    BOOL _resolutionSucceeded;
    BOOL _canceled;
}

@property (nonatomic, getter=isResolutionSucceeded) BOOL resolutionSucceeded;
@property (nonatomic, getter=isCanceled) BOOL canceled;

- (void)setResolutionSucceeded:(BOOL)arg0;
- (void)parseHostname;
- (BOOL)isResolutionSucceeded;
- (id)resolvedAddressesWithAddressArrayRef:(struct __CFArray { } *)arg0;
- (BOOL)isCanceled;
- (void)cancel;
- (void)setCanceled:(BOOL)arg0;
- (void)start;
- (id)initWithHostname:(id)arg0;

@end