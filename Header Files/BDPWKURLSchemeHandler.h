//
//     Generated by private class-dump
//

@class NSString, NSHashTable;

@interface BDPWKURLSchemeHandler : NSObject <WKURLSchemeHandler> {
    NSHashTable *_hashTable;
}

@property (retain, nonatomic) NSHashTable *hashTable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)hashTable;
- (void)setHashTable:(id)arg0;
- (void)handleResponseWithTask:(id)arg0 data:(id)arg1 ofURLInfo:(id)arg2 withError:(id)arg3;
- (BOOL)_enableOptimize;
- (BOOL)isHeicFile:(id)arg0;
- (id)init;
- (void)webView:(id)arg0 stopURLSchemeTask:(id)arg1;
- (void).cxx_destruct;
- (void)webView:(id)arg0 startURLSchemeTask:(id)arg1;

@end
