//
//     Generated by private class-dump
//

@class NSString;

@interface AWEShareSaveIMTransferViewModel : NSObject <AWEShareSaveViewModelProtocol> {
    unsigned long long _type;
    NSString *_title;
    NSString *_duxIconNamed;
}

@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *duxIconNamed;
@property (readonly, nonatomic) double height;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)viewModelForType:(unsigned long long)arg0;

- (id)duxIconNamed;
- (void)setDuxIconNamed:(id)arg0;
- (void).cxx_destruct;
- (double)height;
- (unsigned long long)type;
- (id)title;
- (void)setType:(unsigned long long)arg0;
- (void)setTitle:(id)arg0;

@end