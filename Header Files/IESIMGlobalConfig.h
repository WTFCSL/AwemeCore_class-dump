//
//     Generated by private class-dump
//

@interface IESIMGlobalConfig : NSObject {
    BOOL _imCoreAsyncCreateRequest;
    BOOL _imLCMessageHandleOpRevert;
}

@property (nonatomic) BOOL imCoreAsyncCreateRequest;
@property (nonatomic) BOOL imLCMessageHandleOpRevert;

- (BOOL)imLCMessageHandleOpRevert;
- (BOOL)imCoreAsyncCreateRequest;
- (void)setImCoreAsyncCreateRequest:(BOOL)arg0;
- (void)setImLCMessageHandleOpRevert:(BOOL)arg0;

@end
