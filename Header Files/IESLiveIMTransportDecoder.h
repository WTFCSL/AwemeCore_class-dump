//
//     Generated by private class-dump
//

@class NSString;
@protocol IESLiveIMDecoder;

@interface IESLiveIMTransportDecoder : NSObject <IESLiveIMDecoder> {
    NSString *_name;
}

@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) id<IESLiveIMDecoder> nextDecoder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)decode:(id)arg0 completion:(id /* block */)arg1;
- (id)init;
- (void).cxx_destruct;
- (void)setName:(id)arg0;
- (id)name;

@end