//
//     Generated by private class-dump
//

@class NSString;

@interface IESServiceEntry : NSObject <IESServiceEntryProtocol> {
    long long scopeType;
    id /* block */ _objectDidExtract;
}

@property (copy, nonatomic) id /* block */ objectDidExtract;
@property (readonly, nonatomic) long long scopeType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)extractObject;
- (id)tryExtractObject;
- (id /* block */)objectDidExtract;
- (void)setObjectDidExtract:(id /* block */)arg0;
- (void).cxx_destruct;
- (long long)scopeType;

@end