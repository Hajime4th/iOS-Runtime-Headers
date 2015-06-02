/* Generated by RuntimeBrowser
   Image: /usr/lib/libnfshared.dylib
 */

@interface NFAWDSelect : NSObject <NFAWDEventProtocol> {
    AWDNFCSEAIDSelectEvent *_metric;
    NSData *aid;
}

@property (nonatomic, retain) NSData *aid;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property AWDNFCSEAIDSelectEvent *metric;
@property (readonly) Class superclass;

- (id)aid;
- (void)dealloc;
- (id)getMetric;
- (unsigned long)getMetricId;
- (id)init;
- (id)metric;
- (void)setAid:(id)arg1;
- (void)setMetric:(id)arg1;
- (unsigned int)updateTransactionStateInfoPreviousState:(unsigned int)arg1 withUUID:(id)arg2 withUUIDRefTimestamp:(unsigned long long)arg3;

@end