//
//     Generated by private class-dump
//

@class NSString;

@interface HGGamePlatform : HGGamePlatformBase <HeliumPlatform>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)requestMedia:(const struct HeliumMediaRequest { BOOL x0; BOOL x1; unsigned int x2; } *)arg0 callback:(id /* block */)arg1;
- (id)imageGetType:(id)arg0;
- (id)getUserName;
- (id)imageWithData:(id)arg0;
- (id)displayLink;
- (void)dealloc;
- (id)initWithUniqueID:(id)arg0;

@end
