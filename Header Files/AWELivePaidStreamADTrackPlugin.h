//
//     Generated by private class-dump
//

@class NSString, AWEAwemeModel;

@interface AWELivePaidStreamADTrackPlugin : NSObject <IESLivePaidStreamPlugin> {
    AWEAwemeModel *_model;
}

@property (retain, nonatomic) AWEAwemeModel *model;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)paidStream:(id)arg0 willDisplayForBlockType:(unsigned long long)arg1;
- (void)paidStream:(id)arg0 actionForBlockType:(unsigned long long)arg1 completionHandler:(id /* block */)arg2;
- (id)initWithModel:(id)arg0;
- (void)setModel:(id)arg0;
- (void).cxx_destruct;
- (id)model;

@end